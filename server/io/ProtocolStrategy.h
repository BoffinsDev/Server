/*
* copyright (c) 2010 Sveriges Television AB <info@casparcg.com>
*
*  This file is part of CasparCG.
*
*    CasparCG is free software: you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation, either version 3 of the License, or
*    (at your option) any later version.
*
*    CasparCG is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.

*    You should have received a copy of the GNU General Public License
*    along with CasparCG.  If not, see <http://www.gnu.org/licenses/>.
*
*/
 
#ifndef _PROTOCOLSTRATEGY_H__
#define _PROTOCOLSTRATEGY_H__

#pragma once

#include <string>
#include "clientInfo.h"

namespace caspar {
namespace IO {

class IProtocolStrategy
{
public:
	virtual ~IProtocolStrategy()
	{}

	virtual void Parse(const TCHAR* pData, int charCount, ClientInfoPtr pClientInfo) = 0;
	virtual UINT GetCodepage() = 0;
};

typedef std::tr1::shared_ptr<IProtocolStrategy> ProtocolStrategyPtr;

}	//namespace IO
}	//namespace caspar

#endif	//_PROTOCOLSTRATEGY_H__