#pragma once

#include <stdint.h>
#include "dl_constant.hpp"

namespace simple_network_coefficent
{
    const dl::Filter<int16_t> *get_sequential_4_conv2d_14_biasadd_filter();
    const dl::Bias<int16_t> *get_sequential_4_conv2d_14_biasadd_bias();
    const dl::Filter<int16_t> *get_sequential_4_conv2d_15_biasadd_filter();
    const dl::Bias<int16_t> *get_sequential_4_conv2d_15_biasadd_bias();
    const dl::Filter<int16_t> *get_sequential_4_conv2d_16_biasadd_filter();
    const dl::Bias<int16_t> *get_sequential_4_conv2d_16_biasadd_bias();
    const dl::Filter<int16_t> *get_fused_gemm_0_filter();
    const dl::Bias<int16_t> *get_fused_gemm_0_bias();
}
