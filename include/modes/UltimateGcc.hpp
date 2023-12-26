#ifndef _MODES_ULTIMATE_GCC_HPP
#define _MODES_ULTIMATE_GCC_HPP

#include "core/ControllerMode.hpp"
#include "core/socd.hpp"
#include "core/state.hpp"

class UltimateGcc : public ControllerMode {
  public:
    UltimateGcc(socd::SocdType socd_type);

  private:
    void UpdateDigitalOutputs(InputState &inputs, OutputState &outputs);
    void UpdateAnalogOutputs(InputState &inputs, OutputState &outputs);
};

#endif
