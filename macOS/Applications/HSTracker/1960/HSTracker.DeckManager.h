//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSPopUpButton, NSProgressIndicator, NSTableView, NSTextField, NSToolbar, NSToolbarItem, NSView, _TtC9HSTracker9CurveView;

@interface HSTracker.DeckManager : NSWindowController
{
    // Error parsing type: , name: decksTable
    // Error parsing type: , name: deckListTable
    // Error parsing type: , name: curveView
    // Error parsing type: , name: statsLabel
    // Error parsing type: , name: progressView
    // Error parsing type: , name: progressIndicator
    // Error parsing type: , name: archiveToolBarItem
    // Error parsing type: , name: sortPopUp
    // Error parsing type: , name: classesPopup
    // Error parsing type: , name: toolbar
    // Error parsing type: , name: editDeck
    // Error parsing type: , name: newDeck
    // Error parsing type: , name: decks
    // Error parsing type: , name: currentClass
    // Error parsing type: , name: currentDeck
    // Error parsing type: , name: currentCell
    // Error parsing type: , name: statistics
    // Error parsing type: , name: showArchivedDecks
    // Error parsing type: , name: criterias
    // Error parsing type: , name: orders
    // Error parsing type: , name: sortCriteria
    // Error parsing type: , name: sortOrder
    // Error parsing type: , name: triggers
    // Error parsing type: , name: game
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)exportHSString:(id)arg1;
- (void)changeSort:(id)arg1;
- (void)archiveDeck:(id)arg1;
- (void)deleteDeck:(id)arg1;
- (void)useDeck:(id)arg1;
- (void)editDeck:(id)arg1;
- (void)renameDeck:(id)arg1;
- (void)gitter:(id)arg1;
- (void)twitter:(id)arg1;
- (void)donate:(id)arg1;
- (void)showStatistics:(id)arg1;
- (void)addDeck:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)filterClassesAction:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)dealloc;
- (void)windowDidLoad;
@property(nonatomic) __weak NSToolbar *toolbar; // @synthesize toolbar;
@property(nonatomic) __weak NSPopUpButton *classesPopup; // @synthesize classesPopup;
@property(nonatomic) __weak NSPopUpButton *sortPopUp; // @synthesize sortPopUp;
@property(nonatomic) __weak NSToolbarItem *archiveToolBarItem; // @synthesize archiveToolBarItem;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic) __weak NSView *progressView; // @synthesize progressView;
@property(nonatomic) __weak NSTextField *statsLabel; // @synthesize statsLabel;
@property(nonatomic) __weak _TtC9HSTracker9CurveView *curveView; // @synthesize curveView;
@property(nonatomic) __weak NSTableView *deckListTable; // @synthesize deckListTable;
@property(nonatomic) __weak NSTableView *decksTable; // @synthesize decksTable;

@end

