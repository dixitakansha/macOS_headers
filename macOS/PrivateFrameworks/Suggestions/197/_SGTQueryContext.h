//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, SGTInput, _SGTSpotlightSuggesterTiming;

__attribute__((visibility("hidden")))
@interface _SGTQueryContext : NSObject
{
    long long queryID;
    NSSet *attributeNames;
    NSArray *additionalAttributeNames;
    NSString *inputString;
    SGTInput *input;
    struct _NSRange NLRange;
    BOOL isNLSearch;
    long long NLScope;
    _SGTSpotlightSuggesterTiming *timing;
    BOOL hasFilterQuery;
}

- (void)dealloc;

@end

