#pragma once

#include <cuda_runtime.h>
#include <cstdint>
#include <opencv2/opencv.hpp>

void cuda_preprocess_init(int max_image_size);
void cuda_preprocess_destroy();
void cuda_preprocess(const uint8_t* src, int src_width, int src_height,
                     float* dst, int dst_width, int dst_height,
                     cudaStream_t stream);
void cuda_batch_preprocess(std::vector<cv::Mat>& img_batch,
                           float* dst, int dst_width, int dst_height,
                           cudaStream_t stream);

