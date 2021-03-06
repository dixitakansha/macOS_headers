//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface iTermMinimumSubsequenceMatcher : NSObject
{
    NSString *_query;
    NSArray *_queryChars;
    NSDictionary *_postingLists;
    NSMutableArray *_indexes;
}

@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
- (id)indexSetForDocument:(id)arg1;
- (id)bestIndexes;
- (id)indexSetForIndexes:(id)arg1;
- (id)initialIndexes;
- (struct _NSRange)range;
- (BOOL)advanceIndexes;
- (id)postingListsForDocument:(id)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1;

@end

