//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEODataURLSessionList : NSObject
{
    NSMutableArray *_urlSessions;
    NSMutableArray *_lastUsedDates;
}

- (void).cxx_destruct;
- (void)pruneSessionsNotInIdentifierArray:(id)arg1 agressive:(BOOL)arg2;
- (void)addSession:(id)arg1;
- (id)urlSessionForRequest:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;

@end

