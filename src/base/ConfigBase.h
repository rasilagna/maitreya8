/***********************************************************************
 This is the source code of Maitreya, open source platform for Vedic
 and western astrology.

 File       src/base/ConfigBase.h
 Release    8.0
 Author     Martin Pettau
 Copyright  2003-2017 by the author

 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License,
 * or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
************************************************************************/
#ifndef _CONFIGBASE_H_
#define _CONFIGBASE_H_

#include <wx/string.h>

class wxJSONValue;

/*************************************************//**
*
* 
*
******************************************************/
class ConfigBase
{
public:

	virtual ~ConfigBase() {}
	virtual void load( wxJSONValue&, wxString = wxEmptyString ) = 0;
	virtual void save( wxJSONValue&, wxString = wxEmptyString ) = 0;

protected:

	void reportMissingKey( wxString cname, wxString attname );
};


#endif

