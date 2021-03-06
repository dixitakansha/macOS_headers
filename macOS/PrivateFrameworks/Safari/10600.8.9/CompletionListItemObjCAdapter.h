//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WBSCompletionListItem-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CompletionListItemObjCAdapter : NSObject <WBSCompletionListItem>
{
    NSString *_parsecDomainIndentifier;
    struct CompletionListItem *_completionListItem;
}

@property(nonatomic) struct CompletionListItem *completionListItem; // @synthesize completionListItem=_completionListItem;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier; // @synthesize parsecDomainIdentifier=_parsecDomainIndentifier;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_determineParsecDomainIdentifier;
- (id)initWithCompletionListItem:(struct CompletionListItem *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

