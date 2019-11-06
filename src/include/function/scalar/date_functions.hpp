//===----------------------------------------------------------------------===//
//                         DuckDB
//
// function/scalar/date_functions.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "function/scalar_function.hpp"
#include "function/function_set.hpp"

namespace duckdb {

struct AgeFun {
	static void RegisterFunction(BuiltinFunctions &set);
};

struct DatePartFun {
	static void RegisterFunction(BuiltinFunctions &set);
};

struct YearFun {
	static void RegisterFunction(BuiltinFunctions &set);
};

struct CurrentTimeFun {
	static void RegisterFunction(BuiltinFunctions &set);
};

struct CurrentDateFun {
	static void RegisterFunction(BuiltinFunctions &set);
};

struct CurrentTimestampFun {
	static void RegisterFunction(BuiltinFunctions &set);
};

} // namespace duckdb