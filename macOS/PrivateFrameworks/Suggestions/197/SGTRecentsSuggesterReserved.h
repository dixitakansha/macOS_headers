//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SGTRecentsSuggesterReserved : NSObject
{
    NSMutableArray *recentSuggestions;
    NSMutableArray *recentSuggestionValues;
    NSObject<OS_dispatch_queue> *queue;
    long long searchID;
    NSString *saveName;
    long long maxRecents;
    NSUserDefaults *defaults;
    BOOL global;
    BOOL isSaving;
}

- (void)finalize;
- (void)dealloc;

@end

