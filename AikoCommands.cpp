#include "AikoCommands.h"

namespace Aiko {
  namespace Command {
    SExpression parameter;

#include "aiko_commands/AikoCommandClock.cpp"
#include "aiko_commands/AikoCommandNode.cpp"
  }
}

#include "aiko_commands/FreeRAM.cpp"
