//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarAgentLink/CalAgentLinkOperation.h>

@interface CalAgentLinkQueueStatusOperation : CalAgentLinkOperation
{
    BOOL _runningQueueFound;
}

@property(nonatomic) BOOL runningQueueFound; // @synthesize runningQueueFound=_runningQueueFound;
- (void)responsePayloadReceived:(id)arg1;
- (id)description;
- (id)init;

@end

