#pragma once

using namespace System;

ref class Dateformat
{
public:
	static String^ StringDatetoSQL(String ^str );
	static String^ SQLDatetoString(String^ str);
};

