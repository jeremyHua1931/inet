//
// Copyright (C) 2020 OpenSim Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later
//

import inet.common.INETDefs;
import inet.common.TagBase;
import inet.common.Units;

namespace inet;

enum PacketEventKind
{
    PEK_UNDEFINED    = -1;
    PEK_DELAYED      = 0;
    PEK_QUEUED       = 1;
    PEK_PROCESSED    = 2;
    PEK_TRANSMITTED  = 3;
    PEK_PROPAGATED   = 4;
}

class PacketEvent extends cObject
{
    @str(getClassName());
    int kind @enum(PacketEventKind) = PEK_UNDEFINED;
    string modulePath;
    int64_t eventNumber = -1;
    simtime_t simulationTime = -1;
    simtime_t bitDuration = 0; // per bit duration
    simtime_t packetDuration = 0; // per packet duration
    b packetLength = b(-1);
}

class PacketTransmittedEvent extends PacketEvent
{
    bps datarate = bps(-1);
}

class PacketEventTag extends TagBase
{
    PacketEvent *packetEvents[];
}
