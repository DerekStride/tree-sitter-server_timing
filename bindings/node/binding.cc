#include <napi.h>

typedef struct TSLanguage TSLanguage;

extern "C" TSLanguage *tree_sitter_server_timing();

// "tree-sitter", "language" hashed with BLAKE2
const napi_type_tag LANGUAGE_TYPE_TAG = {
    0x8AF2E5212AD58ABF, 0xD5006CAD83ABBA16
};

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports["name"] = Napi::String::New(env, "server_timing");
    auto language = Napi::External<TSLanguage>::New(env, tree_sitter_server_timing());
    language.TypeTag(&LANGUAGE_TYPE_TAG);
    exports["language"] = language;
    return exports;
}

NODE_API_MODULE(tree_sitter_server_timing_binding, Init)
