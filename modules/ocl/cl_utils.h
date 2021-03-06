/*
 * cl_utils.h - CL Utilities
 *
 *  Copyright (c) 2016 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Wind Yuan <feng.yuan@intel.com>
 */

#ifndef XCAM_CL_UTILS_H
#define XCAM_CL_UTILS_H

#include "xcam_utils.h"
#include "ocl/cl_context.h"
#include "ocl/cl_memory.h"
#include "ocl/cl_video_buffer.h"

#define XCAM_CL_IMAGE_ALIGNMENT_X 4

namespace XCam {

bool write_image (SmartPtr<CLImage> image, const char *file_name);

SmartPtr<CLBuffer> convert_to_clbuffer (
    const SmartPtr<CLContext> &context,
    SmartPtr<VideoBuffer> &buf);

SmartPtr<CLImage> convert_to_climage (
    const SmartPtr<CLContext> &context,
    SmartPtr<VideoBuffer> &buf,
    const CLImageDesc &desc,
    uint32_t offset = 0,
    cl_mem_flags flags = CL_MEM_READ_WRITE);

}

#endif //XCAM_CL_UTILS_H

