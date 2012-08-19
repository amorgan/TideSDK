/**
 * Appcelerator Kroll - licensed under the Apache Public License 2
 * see LICENSE in the root folder for details on the license.
 * Copyright (c) 2009 Appcelerator, Inc. All Rights Reserved.
 */
#ifndef _PHP_FUNCTION_H_
#define _PHP_FUNCTION_H_

namespace tide
{
	class KPHPFunction : public Method
	{
		public:
		KPHPFunction(const char *functionName);

		virtual ~KPHPFunction();
		ValueRef Call(const ValueList& args);
		virtual void Set(const char *name, ValueRef value);
		virtual ValueRef Get(const char *name);
		virtual SharedStringList GetPropertyNames();
		virtual SharedString DisplayString(int);
		virtual bool Equals(KObjectRef);
		bool PropertyExists(const char* property);

		inline std::string& GetMethodName() { return methodName; }

		private:
		std::string methodName;
		zval* zMethodName;
		KObjectRef globalObject;
	};
}
#endif
