/**
* @file  libargument.h
* @brief Header implementing a class for an Action Library.
*
* @section License
*
* Copyright (C) 2014 Robert B. Colton
* This file is a part of the LGL Reader Library.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
**/

#ifndef LIBRARY_H
#define LIBRARY_H

namespace ALR {
class Library;
}

#include "libaction.h"

#include <string>
#include <vector>
using std::string;
using std::vector;

namespace ALR {

class Library
{
public:
    int id = 0;
    string tabCaption = "";
    bool advanced = false;
    char* actionImages;
    vector<LibAction*> libActions;

    Library();
    int hashCode();
    LibAction* addLibAction();
    LibAction* getLibAction(int id);
};

}

#endif // LIBRARY_H
