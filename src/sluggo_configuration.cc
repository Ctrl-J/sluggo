#include <sluggo_configuration.h>

namespace Sluggo
{
  SluggoConfiguration::SluggoConfiguration(std::string set_filename)
  {
    filename = set_filename;

    reload_configuration();
  }

  std::string SluggoConfiguration::get_filename()
  {
    return filename;
  }

  void SluggoConfiguration::set_filename(const std::string &target_filename)
  {
    filename = target_filename;
  }

  void SluggoConfiguration::reload_configuration()
  {

  }

  Codex::WindowConfigOptions SluggoConfiguration::get_window_options()
  {
    return window_config_options;
  }

  void SluggoConfiguration::set_window_options(const Codex::WindowConfigOptions &target_config_options)
  {
    window_config_options = target_config_options;
  }
}
