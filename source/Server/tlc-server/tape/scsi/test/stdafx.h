/* Copyright (c) 2012 BDT Media Automation GmbH
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * stdafx.h
 *
 *  Created on: Aug 3, 2012
 *      Author: Sam Chen
 */

#pragma once

#include <cppunit/extensions/HelperMacros.h>


#include "../../stdafx.h"


#include "../../TapeLibraryManager.h"

using namespace tape;


#define START_TEST(msg) cout << "===============================================Starting test function: " << msg << endl;
#define END_TEST(msg)   cout << "===============================================Ending " << msg << endl << endl;

#define START_SUIT(msg) cout << endl << "==================Starting test suit: " << msg << endl;