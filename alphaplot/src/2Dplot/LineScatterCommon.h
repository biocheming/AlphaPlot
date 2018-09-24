#ifndef LINESCATTERCOMMON_H
#define LINESCATTERCOMMON_H

namespace LSCommon {
enum class LineStyleType : int {
  None = 0,
  Line = 1,
  StepLeft = 2,
  StepRight = 3,
  StepCenter = 4,
  Impulse = 5,
};

enum class ScatterStyle : int {
  None = 0,
  Dot = 1,
  Cross = 2,
  Plus = 3,
  Circle = 4,
  Disc = 5,
  Square = 6,
  Diamond = 7,
  Star = 8,
  Triangle = 9,
  TriangleInverted = 10,
  CrossSquare = 11,
  PlusSquare = 12,
  CrossCircle = 13,
  PlusCircle = 14,
  Peace = 15,
};

enum class PlotType{
  Associated,
  Function
};
}  // namespace LSCommon

#endif  // LINESCATTERCOMMON_H
