//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSPersistentStoreRequest.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSRefreshRequest : NSPersistentStoreRequest
{
    NSSet *_refreshObjects;
    unsigned int _refreshType;
}

- (unsigned long long)requestType;
- (void)setRefreshType:(unsigned int)arg1;
- (void)setRefreshObjects:(id)arg1;
- (unsigned int)refreshType;
- (id)refreshObjects;
- (id)init;
- (void)dealloc;

@end

