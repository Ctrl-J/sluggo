#include <iostream>
#include <memory>

#include <codex.h>
#include <sluggo_configuration.h>

#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

int APIENTRY WinMain(
  HINSTANCE hInstance,
  HINSTANCE hPrevInstance,
  LPSTR lpCmdLine,
  int nCmdShow)
#else
int main(void)
#endif
{
  auto sluggo_config = std::make_shared<Sluggo::SluggoConfiguration>("sluggo.toml");
  auto codex_engine = std::make_shared<Codex::Engine>(sluggo_config);
  codex_engine->Run();

  return 0;
}
