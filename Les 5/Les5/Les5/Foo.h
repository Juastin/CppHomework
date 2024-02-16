#pragma once
class Foo
{
private:
	int m_foo;

public:
	// Explicit constructor
	Foo (int foo) : m_foo(foo) {}
	int GetFoo() { return m_foo; }
};

