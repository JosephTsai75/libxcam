lib_LTLIBRARIES = libxcam_soft.la

XCAMSOFT_CXXFLAGS =               \
    $(LIBCL_CFLAGS)               \
    -I$(top_srcdir)/xcore         \
    -I$(top_srcdir)/modules       \
    $(NULL)

xcam_soft_sources =                  \
    soft_handler.cpp                 \
    soft_video_buf_allocator.cpp     \
    soft_worker.cpp                  \
    soft_blender_tasks_priv.cpp      \
    soft_blender.cpp                 \
    soft_geo_mapper.cpp              \
   $(NULL)

libxcam_soft_la_SOURCES =   \
    $(xcam_soft_sources)    \
    $(NULL)

libxcam_soft_la_CXXFLAGS =  \
    $(XCAMSOFT_CXXFLAGS)    \
    $(XCAM_CXXFLAGS)        \
    $(NULL)

libxcam_soft_la_LIBADD =                  \
    $(top_builddir)/xcore/libxcam_core.la \
    $(NULL)

libxcam_soft_la_LDFLAGS =   \
    $(XCAM_LT_LDFLAGS)      \
    $(PTHREAD_LDFLAGS)      \
    $(NULL)

libxcam_softincludedir = $(includedir)/xcam/soft

nobase_libxcam_softinclude_HEADERS =   \
    soft_handler.h                     \
    soft_video_buf_allocator.h         \
    soft_worker.h                      \
    soft_image.h                       \
    soft_blender.h                     \
    soft_geo_mapper.h                  \
    $(NULL)

noinst_HEADERS =                       \
    soft_blender_tasks_priv.h          \
    $(NULL)

libxcam_soft_la_LIBTOOLFLAGS = --tag=disable-static
