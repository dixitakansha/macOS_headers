//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (BRAdditions)
- (BOOL)br_putBackTrashedItemAtURL:(id)arg1 resultingURL:(id *)arg2 error:(id *)arg3;
- (BOOL)br_trashItemAtURL:(id)arg1 resultingURL:(id *)arg2 error:(id *)arg3;
- (id)br_putBackURLForTrashedItemAtURL:(id)arg1 error:(id *)arg2;
- (void)br_setPutBackInfoOnItemAtURL:(id)arg1;
- (BOOL)br_movePromisedItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
@end

