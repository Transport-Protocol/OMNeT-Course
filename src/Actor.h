//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#ifndef ACTOR_H_
#define ACTOR_H_


#include <omnetpp.h>

/**
 * Simple example class
 */
class Actor: public omnetpp::cSimpleModule {
protected:
    omnetpp::cOutVector v_cnt;
    omnetpp::cOutVector v_lost;

    int cnt;
    int cnt_lost;

    // static  @workaround
    static omnetpp::cOutVector* v_cnt_all;

    // static members for static cOutVector
    static int cnt_all;
    static bool statsAlreadyRecorded;
    static bool globalAlreadyInitialized;
public:
    Actor();
    virtual ~Actor();
    virtual void handleMessage(omnetpp::cMessage *msg) override;
    virtual void initialize() override;
    virtual void finish() override;
};

#endif /* ACTOR_H_ */
