//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/BRContainerHelper-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRFrameworkContainerHelper : NSObject <BRContainerHelper>
{
}

- (id)itemIDForURL:(id)arg1 error:(id *)arg2;
- (unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id *)arg3;
- (id)fetchContainerForURL:(id)arg1;
- (id)fetchAllContainersByIDWithError:(id *)arg1;
- (BOOL)canFetchAllContainersByID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

