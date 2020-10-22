
#include "hawtjni.h"
#include "yara-wrapper_stats.h"

#ifdef NATIVE_STATS

int YaraLibrary_nativeFunctionCount = 32;
int YaraLibrary_nativeFunctionCallCount[32];
char * YaraLibrary_nativeFunctionNames[] = {
	"cast_1jstring",
	"yara_1compiler_1add_1file",
	"yara_1match_1offset",
	"yara_1match_1value",
	"yara_1meta_1identifier",
	"yara_1meta_1integer",
	"yara_1meta_1string",
	"yara_1meta_1type",
	"yara_1module_1load_1data",
	"yara_1module_1name",
	"yara_1module_1unload_1data",
	"yara_1rule_1identifier",
	"yara_1rule_1meta_1next",
	"yara_1rule_1metas",
	"yara_1rule_1string_1next",
	"yara_1rule_1strings",
	"yara_1rule_1tag_1next",
	"yara_1rule_1tags",
	"yara_1string_1identifier",
	"yara_1string_1match_1next",
	"yara_1string_1matches",
	"yara_1tag_1string",
	"yr_1compiler_1add_1string",
	"yr_1compiler_1create",
	"yr_1compiler_1destroy",
	"yr_1compiler_1get_1rules",
	"yr_1compiler_1set_1callback",
	"yr_1finalize",
	"yr_1initialize",
	"yr_1rules_1destroy",
	"yr_1rules_1scan_1file",
	"yr_1rules_1scan_1mem",
};

#define STATS_NATIVE(func) Java_org_fusesource_hawtjni_runtime_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(YaraLibrary_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return YaraLibrary_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(YaraLibrary_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return (*env)->NewStringUTF(env, YaraLibrary_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(YaraLibrary_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return YaraLibrary_nativeFunctionCallCount[index];
}

#endif
