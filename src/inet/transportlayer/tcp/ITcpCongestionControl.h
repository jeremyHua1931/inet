//
// Copyright (C) 2023 OpenSim Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later
//

#ifndef __INET_ITCPCONGESTIONCONTROL_H
#define __INET_ITCPCONGESTIONCONTROL_H

#include "inet/common/INETDefs.h"

namespace inet {
namespace tcp {

class INET_API ITcpCongestionControl : public cObject
{
  public:
    virtual void receivedAckForUnackedData(uint32_t numBytesAcked) = 0;
};

} // namespace tcp
} // namespace inet

#endif

