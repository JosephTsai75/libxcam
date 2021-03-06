XCORE_DIR = $(top_srcdir)/xcore
MODULES_DIR = $(top_srcdir)/modules

TEST_BASE_CXXFLAGS = $(XCAM_CXXFLAGS)
if HAVE_LIBDRM
TEST_BASE_CXXFLAGS += $(LIBDRM_CFLAGS) $(LIBDRM_LIBS)
endif

if USE_LOCAL_ATOMISP
TEST_BASE_CXXFLAGS += -I$(top_srcdir)/ext/atomisp
endif

TEST_BASE_CXXFLAGS += \
	-I$(XCORE_DIR)   \
	-I$(MODULES_DIR) \
	$(NULL)

TEST_BASE_LA = \
	$(NULL)

noinst_PROGRAMS = \
	test-device-manager  \
	test-soft-image  \
	$(NULL)

if ENABLE_IA_AIQ
noinst_PROGRAMS += \
	test-poll-thread     \
	$(NULL)
endif

if HAVE_LIBCL
noinst_PROGRAMS += \
	test-cl-image        \
	test-binary-kernel   \
	test-pipe-manager    \
	test-image-blend     \
	test-image-stitching \
	test-video-stabilization \
	$(NULL)

TEST_BASE_LA += $(top_builddir)/modules/ocl/libxcam_ocl.la

if HAVE_OPENCV
noinst_PROGRAMS += \
	test-image-deblurring \
	$(NULL)

TEST_BASE_CXXFLAGS += $(OPENCV_CFLAGS)
TEST_BASE_LA += $(OPENCV_LIBS)
endif
endif

TEST_BASE_LA +=  \
    $(top_builddir)/modules/interface/libxcam_interface.la \
    $(top_builddir)/xcore/libxcam_core.la \
	$(NULL)

test_device_manager_SOURCES = test-device-manager.cpp
test_device_manager_CXXFLAGS = $(TEST_BASE_CXXFLAGS)
test_device_manager_LDADD = $(TEST_BASE_LA)

if ENABLE_IA_AIQ
ISP_LA = $(top_builddir)/modules/isp/libxcam_isp.la

test_device_manager_LDADD += $(ISP_LA)

test_poll_thread_SOURCES = test-poll-thread.cpp
test_poll_thread_CXXFLAGS = $(TEST_BASE_CXXFLAGS)
test_poll_thread_LDADD = \
	$(TEST_BASE_LA) $(ISP_LA)  \
	$(NULL)
endif

if HAVE_LIBCL
test_cl_image_SOURCES = test-cl-image.cpp
test_cl_image_CXXFLAGS = $(TEST_BASE_CXXFLAGS)
test_cl_image_LDADD = \
	$(TEST_BASE_LA)   \
	$(NULL)

test_binary_kernel_SOURCES = test-binary-kernel.cpp
test_binary_kernel_CXXFLAGS = $(TEST_BASE_CXXFLAGS)
test_binary_kernel_LDADD = \
	$(TEST_BASE_LA)        \
	$(NULL)

test_pipe_manager_SOURCES = test-pipe-manager.cpp
test_pipe_manager_CXXFLAGS = $(TEST_BASE_CXXFLAGS)
test_pipe_manager_LDADD =      \
	$(TEST_BASE_LA)            \
	$(NULL)

test_image_blend_SOURCES = test-image-blend.cpp
test_image_blend_CXXFLAGS = $(TEST_BASE_CXXFLAGS)
test_image_blend_LDADD =       \
	$(TEST_BASE_LA)            \
	$(NULL)

test_image_stitching_SOURCES = test-image-stitching.cpp
test_image_stitching_CXXFLAGS = $(TEST_BASE_CXXFLAGS)
test_image_stitching_LDADD = \
	$(TEST_BASE_LA)          \
	$(NULL)

test_video_stabilization_SOURCES = test-video-stabilization.cpp
test_video_stabilization_CXXFLAGS = $(TEST_BASE_CXXFLAGS)
test_video_stabilization_LDADD = \
	$(TEST_BASE_LA)              \
	$(NULL)

if HAVE_OPENCV
test_image_deblurring_SOURCES = test-image-deblurring.cpp
test_image_deblurring_CXXFLAGS = $(TEST_BASE_CXXFLAGS)
	$(NULL)
test_image_deblurring_LDADD = \
	$(TEST_BASE_LA)           \
	$(NULL)
endif
endif

test_soft_image_SOURCES = test-soft-image.cpp
test_soft_image_CXXFLAGS = $(TEST_BASE_CXXFLAGS)
test_soft_image_LDADD =                           \
	$(top_builddir)/modules/soft/libxcam_soft.la  \
	$(TEST_BASE_LA)          \
	$(NULL)
