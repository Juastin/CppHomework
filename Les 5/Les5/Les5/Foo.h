#pragma once
class Foo
{
private:
	int m_foo;

public:
	Foo (int foo) : m_foo(foo) {}
	int GetFoo() { return m_foo; }
};

