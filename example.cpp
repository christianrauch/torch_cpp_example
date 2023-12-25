#include <torch/torch.h>
#include <iostream>

int main() {
  torch::Tensor tensor = torch::rand({2, 3});
  std::cout << tensor << std::endl;

  std::cout << "CUDA devices: " << torch::cuda::device_count() << std::endl;
  std::cout << "config: " << std::endl << at::show_config() << std::endl;
  std::cout << "flags: " << std::endl << at::get_cxx_flags() << std::endl;
  std::cout << "cpu capability: " << at::get_cpu_capability() << std::endl;
}
