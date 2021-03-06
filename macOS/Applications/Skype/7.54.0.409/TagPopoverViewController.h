//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "SKPopoverDelegate-Protocol.h"

@class NSArrayController, NSButton, NSString, NSTableView, NSTextField, SKPopover;
@protocol TagPopoverDelegate;

@interface TagPopoverViewController : NSViewController <NSTextFieldDelegate, NSTableViewDelegate, NSTableViewDataSource, SKPopoverDelegate>
{
    BOOL _isObservingContactManager;
    BOOL _isObservingContactGroups;
    BOOL _isObservingState;
    BOOL _inEditMode;
    SKPopover *_popover;
    id <TagPopoverDelegate> _delegate;
    NSButton *_addButton;
    NSTableView *_tagsTableView;
    NSArrayController *_tagsController;
    NSTextField *_editTextField;
}

@property __weak NSTextField *editTextField; // @synthesize editTextField=_editTextField;
@property(retain) NSArrayController *tagsController; // @synthesize tagsController=_tagsController;
@property __weak NSTableView *tagsTableView; // @synthesize tagsTableView=_tagsTableView;
@property __weak NSButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) __weak id <TagPopoverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SKPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) BOOL inEditMode; // @synthesize inEditMode=_inEditMode;
- (void).cxx_destruct;
- (id)initialFirstResponderForPopover:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_itemAtRow:(long long)arg1;
- (void)updateLayout;
- (void)updateContent;
- (id)tableViewButtonCellPrototype;
- (void)handleStateChangeForObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingState;
- (void)startObservingState;
- (void)stopObservingContactManager;
- (void)startObservingContactManager;
- (void)stopObservingContactGroups;
- (void)startObservingContactGroups;
- (void)cancelOperation:(id)arg1;
- (void)edit:(id)arg1;
- (void)checkBoxClicked:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)mainWindowContentDidChange:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

