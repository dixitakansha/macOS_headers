//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABGroupActionHelper-Protocol.h"

@class ABGroupEntriesList, ABSearchElementUIController, ABSmartGroup, NSString, NSWindow;
@protocol ABCommandExecutor;

@interface ABBookEditSmartGroupHelper : NSObject <ABGroupActionHelper>
{
    ABSmartGroup *_smartGroup;
    NSWindow *_window;
    ABGroupEntriesList *_groupEntriesList;
    id <ABCommandExecutor> _commandExecutor;
    ABSearchElementUIController *_uiController;
}

- (void)performAction;
- (id)initWithSmartGroup:(id)arg1 window:(id)arg2 groupEntriesList:(id)arg3 commandExecutor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

