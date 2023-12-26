#ifndef _MODES_ULTIMATE_SWITCH_HPP
#define _MODES_ULTIMATE_SWITCH_HPP

#include "core/ControllerMode.hpp"
#include "core/socd.hpp"
#include "core/state.hpp"

class UltimateSwitch : public ControllerMode {
  public:
    UltimateSwitch(socd::SocdType socd_type);

  private:
    void UpdateDigitalOutputs(InputState &inputs, OutputState &outputs);
    void UpdateAnalogOutputs(InputState &inputs, OutputState &outputs);
};

#endif
