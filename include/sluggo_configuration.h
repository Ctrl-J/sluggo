#pragma once
#include<i_configuration.h>
#include <string>

namespace Sluggo
{
  class SluggoConfiguration : public Codex::IConfiguration
  {
  public:
    SluggoConfiguration(std::string set_filename);

    virtual std::string get_filename() override;
    virtual void set_filename(const std::string &target_filename) override;

    virtual Codex::WindowConfigOptions get_window_options() override;
    virtual void set_window_options(const Codex::WindowConfigOptions &target_options) override;

    virtual void reload_configuration() override;

  private:
    std::string filename;
    Codex::WindowConfigOptions window_config_options;

  };
}