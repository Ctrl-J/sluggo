#include <codex.h>
#include <iostream>
#include <memory>

int main(void)
{
  auto codex_engine = std::make_shared<Codex::Engine>("Hi There");
  codex_engine->Run();

  return 0;
}
