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

			// Create two monsters and store in a vector for testing:
			std::vector<Object> monsters;
			int monsterTestingHealth{ 25 };
			monsters.push_back({ "The Diabolical Terror Rat",	3, monsterTestingHealth });
			monsters.push_back({ "The Crazed Flame Bull",		3, monsterTestingHealth });

			// Create the player object:
			Object player{ "Mad Dog", 5, 20 };

			// Call the testing function:
			monsterAttack( player, monsters );

			// Test for player health change:
			Assert::IsTrue(player.health <= 20);

			// Loop through the monster(s) and verify their health is unchanged:
			for (auto monster : monsters)
				Assert::AreEqual(monster.health, monsterTestingHealth);

		}
	};
}