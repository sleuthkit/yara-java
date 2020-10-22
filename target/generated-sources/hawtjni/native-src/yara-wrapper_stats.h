
#ifdef NATIVE_STATS
extern int YaraLibrary_nativeFunctionCount;
extern int YaraLibrary_nativeFunctionCallCount[];
extern char* YaraLibrary_nativeFunctionNames[];
#define YaraLibrary_NATIVE_ENTER(env, that, func) YaraLibrary_nativeFunctionCallCount[func]++;
#define YaraLibrary_NATIVE_EXIT(env, that, func) 
#else
#ifndef YaraLibrary_NATIVE_ENTER
#define YaraLibrary_NATIVE_ENTER(env, that, func) 
#endif
#ifndef YaraLibrary_NATIVE_EXIT
#define YaraLibrary_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	YaraLibrary_cast_1jstring_FUNC,
	YaraLibrary_yara_1compiler_1add_1file_FUNC,
	YaraLibrary_yara_1match_1offset_FUNC,
	YaraLibrary_yara_1match_1value_FUNC,
	YaraLibrary_yara_1meta_1identifier_FUNC,
	YaraLibrary_yara_1meta_1integer_FUNC,
	YaraLibrary_yara_1meta_1string_FUNC,
	YaraLibrary_yara_1meta_1type_FUNC,
	YaraLibrary_yara_1module_1load_1data_FUNC,
	YaraLibrary_yara_1module_1name_FUNC,
	YaraLibrary_yara_1module_1unload_1data_FUNC,
	YaraLibrary_yara_1rule_1identifier_FUNC,
	YaraLibrary_yara_1rule_1meta_1next_FUNC,
	YaraLibrary_yara_1rule_1metas_FUNC,
	YaraLibrary_yara_1rule_1string_1next_FUNC,
	YaraLibrary_yara_1rule_1strings_FUNC,
	YaraLibrary_yara_1rule_1tag_1next_FUNC,
	YaraLibrary_yara_1rule_1tags_FUNC,
	YaraLibrary_yara_1string_1identifier_FUNC,
	YaraLibrary_yara_1string_1match_1next_FUNC,
	YaraLibrary_yara_1string_1matches_FUNC,
	YaraLibrary_yara_1tag_1string_FUNC,
	YaraLibrary_yr_1compiler_1add_1string_FUNC,
	YaraLibrary_yr_1compiler_1create_FUNC,
	YaraLibrary_yr_1compiler_1destroy_FUNC,
	YaraLibrary_yr_1compiler_1get_1rules_FUNC,
	YaraLibrary_yr_1compiler_1set_1callback_FUNC,
	YaraLibrary_yr_1finalize_FUNC,
	YaraLibrary_yr_1initialize_FUNC,
	YaraLibrary_yr_1rules_1destroy_FUNC,
	YaraLibrary_yr_1rules_1scan_1file_FUNC,
	YaraLibrary_yr_1rules_1scan_1mem_FUNC,
} YaraLibrary_FUNCS;
