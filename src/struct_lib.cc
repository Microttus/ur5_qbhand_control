//
// Created by biomech on 14.03.24.
//

#include <vector>
#include <cstdint>

struct FingerForceStruct {
  int thumb;
  int index;
  int middle;
  int ring;
  int little;
  int palm;
};

struct RobotHandFeedback {
  std::vector<int16_t> positions;
  std::vector<int16_t> currents;
  int force_compensated;
};