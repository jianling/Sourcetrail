#include "SourceGroupType.h"

std::string sourceGroupTypeToString(SourceGroupType v)
{
	switch (v)
	{
	case SOURCE_GROUP_C_EMPTY:
		return "C Source Group";
	case SOURCE_GROUP_CPP_EMPTY:
		return "C++ Source Group";
	case SOURCE_GROUP_CXX_CDB:
		return "C/C++ from Compilation Database";
	case SOURCE_GROUP_CXX_CODEBLOCKS:
		return "C/C++ from Code::Blocks";
	case SOURCE_GROUP_CXX_SONARGRAPH:
		return "C/C++ from Sonargraph";
	case SOURCE_GROUP_CXX_VS:
		return "C/C++ from Visual Studio";
	case SOURCE_GROUP_JAVA_EMPTY:
		return "Java Source Group";
	case SOURCE_GROUP_JAVA_MAVEN:
		return "Java Source Group from Maven";
	case SOURCE_GROUP_JAVA_GRADLE:
		return "Java Source Group from Gradle";
	case SOURCE_GROUP_JAVA_SONARGRAPH:
		return "Java from Sonargraph";
	case SOURCE_GROUP_PYTHON_EMPTY:
		return "Python Source Group";
	case SOURCE_GROUP_CUSTOM_COMMAND:
		return "Custom Command Source Group";
	case SOURCE_GROUP_UNKNOWN:
		break;
	}
	return "unknown";
}

std::string sourceGroupTypeToProjectSetupString(SourceGroupType v)
{
	switch (v)
	{
	case SOURCE_GROUP_C_EMPTY:
		return "Empty C Source Group";
	case SOURCE_GROUP_CPP_EMPTY:
		return "Empty C++ Source Group";
	case SOURCE_GROUP_CXX_CDB:
		return "C/C++ from Compilation Database";
	case SOURCE_GROUP_CXX_CODEBLOCKS:
		return "C/C++ from Code::Blocks";
	case SOURCE_GROUP_CXX_SONARGRAPH:
		return "C/C++ from Sonargraph";
	case SOURCE_GROUP_CXX_VS:
		return "C/C++ from Visual Studio";
	case SOURCE_GROUP_JAVA_EMPTY:
		return "Empty Java Source Group";
	case SOURCE_GROUP_JAVA_MAVEN:
		return "Java Source Group from Maven";
	case SOURCE_GROUP_JAVA_GRADLE:
		return "Java Source Group from Gradle";
	case SOURCE_GROUP_JAVA_SONARGRAPH:
		return "Java from Sonargraph";
	case SOURCE_GROUP_PYTHON_EMPTY:
		return "Empty Python Source Group";
	case SOURCE_GROUP_CUSTOM_COMMAND:
		return "Custom Command Source Group";
	case SOURCE_GROUP_UNKNOWN:
		break;
	}
	return "unknown";
}

SourceGroupType stringToSourceGroupType(const std::string& v)
{
	if (v == sourceGroupTypeToString(SOURCE_GROUP_C_EMPTY))
	{
		return SOURCE_GROUP_C_EMPTY;
	}
	else if (v == sourceGroupTypeToString(SOURCE_GROUP_CPP_EMPTY))
	{
		return SOURCE_GROUP_CPP_EMPTY;
	}
	else if (v == sourceGroupTypeToString(SOURCE_GROUP_CXX_CDB))
	{
		return SOURCE_GROUP_CXX_CDB;
	}
	else if (v == sourceGroupTypeToString(SOURCE_GROUP_CXX_CODEBLOCKS))
	{
		return SOURCE_GROUP_CXX_CODEBLOCKS;
	}
	else if (v == sourceGroupTypeToString(SOURCE_GROUP_CXX_SONARGRAPH))
	{
		return SOURCE_GROUP_CXX_SONARGRAPH;
	}
	else if (v == sourceGroupTypeToString(SOURCE_GROUP_CXX_VS))
	{
		return SOURCE_GROUP_CXX_VS;
	}
	else if (v == sourceGroupTypeToString(SOURCE_GROUP_JAVA_EMPTY))
	{
		return SOURCE_GROUP_JAVA_EMPTY;
	}
	else if (v == sourceGroupTypeToString(SOURCE_GROUP_JAVA_MAVEN))
	{
		return SOURCE_GROUP_JAVA_MAVEN;
	}
	else if (v == sourceGroupTypeToString(SOURCE_GROUP_JAVA_GRADLE))
	{
		return SOURCE_GROUP_JAVA_GRADLE;
	}
	else if (v == sourceGroupTypeToString(SOURCE_GROUP_JAVA_SONARGRAPH))
	{
		return SOURCE_GROUP_JAVA_SONARGRAPH;
	}
	else if (v == sourceGroupTypeToString(SOURCE_GROUP_PYTHON_EMPTY))
	{
		return SOURCE_GROUP_PYTHON_EMPTY;
	}
	else if (v == sourceGroupTypeToString(SOURCE_GROUP_CUSTOM_COMMAND))
	{
		return SOURCE_GROUP_CUSTOM_COMMAND;
	}

	return SOURCE_GROUP_UNKNOWN;
}