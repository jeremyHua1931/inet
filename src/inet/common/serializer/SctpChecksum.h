//
// Copyright (C) 2005 Christian Dankbar, Irene Ruengeler, Michael Tuexen
//               2009 Zoltan Bojthe
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INET_SCTPCHECKSUM_H
#define __INET_SCTPCHECKSUM_H

#include "inet/common/INETDefs.h"

namespace inet {
namespace serializer {

/**
 * Calculates checksum.
 */
class INET_API SctpChecksum
{
  public:
    SctpChecksum() {}

    static uint16_t checksum(const void *addr, unsigned int count)
    {
        return ~_checksum(addr, count);
    }

    static uint16_t _checksum(const void *addr, unsigned int count);
};

} // namespace serializer
} // namespace inet

#endif // ifndef __INET_SCTPCHECKSUM_H
