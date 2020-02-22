#pragma once

#include <iosfwd>
#include <string>

#include <entt/export.hpp>

namespace entt
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  ENTT_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
