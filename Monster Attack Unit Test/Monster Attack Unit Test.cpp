//
//  Monster Attack Unit Test.cpp
//
//  Project: UALR - Programming 2 - Spring 22 - Power Play 3 - Unit Tests
//  Created by: Mark McCorkle on 20220204
//  Based on: Power Play 2 by Sean Orme
//  IDE: CLion 2021.2.3     - VERIFIED/UNVERIFIED
//  IDE: XCode              - VERIFIED/UNVERIFIED
//  IDE: Visual Studio 2019 - VERIFIED
//  IDE: Visual Studio 2022 - VERIFIED/UNVERIFIED
//  IDE: Linux via g++      - VERIFIED/UNVERIFIED
//
#include "pch.h"
#include "CppUnitTest.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

struct Object
{
	std::string name;
	int strength{ 0 };
	int health{ 0 };
};
bool monsterAttack(Object& player, const std::vector<Object>& monsters);

namespace MonsterAttackUnitTest
{
	TEST_CLASS(MonsterAttackUnitTest)
	{
	public:

		TEST_METHOD(MonsterAttackTestMethod)
		{
		}
	};
}