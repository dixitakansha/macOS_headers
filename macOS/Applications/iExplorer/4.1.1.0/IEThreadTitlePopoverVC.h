//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class IEMessagesTitleBarVC, NSString, NSTableView, SMSMessageThread;

__attribute__((visibility("hidden")))
@interface IEThreadTitlePopoverVC : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    IEMessagesTitleBarVC *_parentVC;
    SMSMessageThread *_messageThread;
    NSTableView *_tv_participants;
}

@property(nonatomic) __weak NSTableView *tv_participants; // @synthesize tv_participants=_tv_participants;
@property(retain, nonatomic) SMSMessageThread *messageThread; // @synthesize messageThread=_messageThread;
@property(nonatomic) IEMessagesTitleBarVC *parentVC; // @synthesize parentVC=_parentVC;
- (void).cxx_destruct;
- (void)sizeAndLoadTable;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)loadMessageThread:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

