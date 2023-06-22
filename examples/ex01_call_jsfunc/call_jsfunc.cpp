#include <iostream>
#include <string>
#include <emscripten.h>
#include <emscripten/bind.h>

EM_JS(void, call_js, (
  const char *subject,
  int len_subject,
  const char *msg,
  int len_msg
),{
  jsFunction(UTF8ToString(subject, len_subject),UTF8ToString(msg, len_msg));
});

bool my_callJs()
{
  const std::string subject = "HELLO WORLD";
  const std::string msg     = "안녕";

  call_js(subject.c_str(), subject.length(),
          msg.c_str(), msg.length());
  return true;
}

EMSCRIPTEN_BINDINGS(module)
{
  emscripten::function("callJs", &my_callJs);
}

