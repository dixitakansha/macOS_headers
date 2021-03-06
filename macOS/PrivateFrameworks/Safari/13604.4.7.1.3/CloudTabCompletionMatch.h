//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSURLCompletionMatch.h>

@class NSString, WBSCloudTab;

__attribute__((visibility("hidden")))
@interface CloudTabCompletionMatch : WBSURLCompletionMatch
{
    NSString *_originalURLString;
    WBSCloudTab *_cloudTab;
}

+ (long long)matchLocationForString:(id)arg1 inCloudTab:(id)arg2;
@property(readonly, nonatomic) WBSCloudTab *cloudTab; // @synthesize cloudTab=_cloudTab;
- (void).cxx_destruct;
- (id)parsecDomainIdentifier;
- (id)userVisibleURLString;
- (id)originalURLString;
- (id)title;
- (id)initWithCloudTab:(id)arg1 matchLocation:(long long)arg2 userInput:(id)arg3;

@end

