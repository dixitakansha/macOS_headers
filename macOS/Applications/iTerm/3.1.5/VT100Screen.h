//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PTYNoteViewControllerDelegate-Protocol.h"
#import "PTYTextViewDataSource-Protocol.h"
#import "VT100GridDelegate-Protocol.h"
#import "VT100TerminalDelegate-Protocol.h"
#import "iTermMarkDelegate-Protocol.h"
#import "iTermTemporaryDoubleBufferedGridControllerDelegate-Protocol.h"

@class DVR, FindContext, IntervalTree, LineBuffer, NSDictionary, NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSMutableString, NSString, VT100Grid, VT100ScreenMark, VT100Terminal, iTermTemporaryDoubleBufferedGridController;
@protocol VT100ScreenDelegate;

@interface VT100Screen : NSObject <iTermTemporaryDoubleBufferedGridControllerDelegate, iTermMarkDelegate, PTYNoteViewControllerDelegate, PTYTextViewDataSource, VT100GridDelegate, VT100TerminalDelegate>
{
    LineBuffer *linebuffer_;
    NSMutableSet *tabStops_;
    VT100Terminal *terminal_;
    id <VT100ScreenDelegate> delegate_;
    char charsetUsesLineDrawingMode_[4];
    BOOL audibleBell_;
    BOOL showBellIndicator_;
    BOOL flashBell_;
    BOOL postGrowlNotifications_;
    BOOL cursorBlinks_;
    VT100Grid *primaryGrid_;
    VT100Grid *altGrid_;
    VT100Grid *currentGrid_;
    VT100Grid *realCurrentGrid_;
    unsigned int maxScrollbackLines_;
    BOOL unlimitedScrollback_;
    int scrollbackOverflow_;
    long long cumulativeScrollbackOverflow_;
    BOOL collectInputForPrinting_;
    NSMutableString *printBuffer_;
    FindContext *findContext_;
    long long savedFindContextAbsPos_;
    DVR *dvr_;
    BOOL saveToScrollbackInAlternateScreen_;
    BOOL allowTitleReporting_;
    IntervalTree *savedIntervalTree_;
    IntervalTree *intervalTree_;
    NSMutableDictionary *markCache_;
    CDStruct_7a47e81c markCacheRange_;
    int commandStartX_;
    long long commandStartY_;
    BOOL _wraparoundMode;
    BOOL _ansi;
    BOOL _insert;
    BOOL _shellIntegrationInstalled;
    NSDictionary *inlineFileInfo_;
    double lastBell_;
    BOOL _cursorVisible;
    NSMutableIndexSet *_animatedLines;
    NSMutableString *_copyString;
    CDStruct_7ab14d82 _currentPromptRange;
    BOOL _trackCursorLineMovement;
    BOOL _appendToScrollbackWithStatusBar;
    unsigned long long _normalization;
    VT100ScreenMark *_lastCommandMark;
    iTermTemporaryDoubleBufferedGridController *_temporaryDoubleBuffer;
    CDStruct_dc106ac8 _startOfRunningCommandOutput;
    CDStruct_7ab14d82 _lastCommandOutputRange;
}

@property(retain, nonatomic) iTermTemporaryDoubleBufferedGridController *temporaryDoubleBuffer; // @synthesize temporaryDoubleBuffer=_temporaryDoubleBuffer;
@property(retain, nonatomic) VT100ScreenMark *lastCommandMark; // @synthesize lastCommandMark=_lastCommandMark;
@property(readonly, nonatomic) CDStruct_dc106ac8 startOfRunningCommandOutput; // @synthesize startOfRunningCommandOutput=_startOfRunningCommandOutput;
@property(readonly, nonatomic) NSIndexSet *animatedLines; // @synthesize animatedLines=_animatedLines;
@property(readonly, nonatomic) BOOL shellIntegrationInstalled; // @synthesize shellIntegrationInstalled=_shellIntegrationInstalled;
@property(nonatomic) unsigned long long normalization; // @synthesize normalization=_normalization;
@property(readonly, nonatomic) CDStruct_7ab14d82 lastCommandOutputRange; // @synthesize lastCommandOutputRange=_lastCommandOutputRange;
@property(nonatomic) BOOL appendToScrollbackWithStatusBar; // @synthesize appendToScrollbackWithStatusBar=_appendToScrollbackWithStatusBar;
@property(nonatomic) BOOL trackCursorLineMovement; // @synthesize trackCursorLineMovement=_trackCursorLineMovement;
@property(nonatomic) id <VT100ScreenDelegate> delegate; // @synthesize delegate=delegate_;
@property(retain, nonatomic) DVR *dvr; // @synthesize dvr=dvr_;
@property(nonatomic) BOOL saveToScrollbackInAlternateScreen; // @synthesize saveToScrollbackInAlternateScreen=saveToScrollbackInAlternateScreen_;
@property(nonatomic) BOOL unlimitedScrollback; // @synthesize unlimitedScrollback=unlimitedScrollback_;
@property(nonatomic) unsigned int maxScrollbackLines; // @synthesize maxScrollbackLines=maxScrollbackLines_;
@property(nonatomic) BOOL allowTitleReporting; // @synthesize allowTitleReporting=allowTitleReporting_;
@property(nonatomic) BOOL cursorBlinks; // @synthesize cursorBlinks=cursorBlinks_;
@property(nonatomic) BOOL postGrowlNotifications; // @synthesize postGrowlNotifications=postGrowlNotifications_;
@property(nonatomic) BOOL flashBell; // @synthesize flashBell=flashBell_;
@property(nonatomic) BOOL showBellIndicator; // @synthesize showBellIndicator=showBellIndicator_;
@property(nonatomic) BOOL audibleBell; // @synthesize audibleBell=audibleBell_;
@property(retain, nonatomic) VT100Terminal *terminal; // @synthesize terminal=terminal_;
- (void)temporaryDoubleBufferedGridDidExpire;
- (id)temporaryDoubleBufferedGridCopy;
- (void)fixUpDeserializedIntervalTree:(id)arg1 knownTriggers:(id)arg2 visible:(BOOL)arg3 guidOfLastCommandMark:(id)arg4;
- (void)restoreFromDictionary:(id)arg1 includeRestorationBanner:(BOOL)arg2 knownTriggers:(id)arg3 reattached:(BOOL)arg4;
- (id)contentsOfNonCurrentGrid;
- (id)contentsDictionary;
- (void)markDidBecomeCommandMark:(id)arg1;
- (void)gridCursorDidMove;
- (unsigned long long)gridUnicodeNormalizationForm;
- (void)gridCursorDidChangeLine;
- (struct screen_char_t)gridBackgroundColorCode;
- (struct screen_char_t)gridForegroundColorCode;
- (void)noteDidEndEditing:(id)arg1;
- (void)noteDidRequestRemoval:(id)arg1;
- (BOOL)continueFindResultsInContext:(id)arg1 toArray:(id)arg2;
- (long long)findContextAbsPosition;
- (id)objectInDictionary:(id)arg1 withFirstKeyFrom:(id)arg2;
- (void)stripTrailingSpaceFromLine:(id)arg1;
- (void)popScrollbackLines:(int)arg1;
- (BOOL)isDoubleWidthCharacter:(unsigned short)arg1;
- (void)doPrint;
- (BOOL)haveTabStopAt:(int)arg1;
- (void)blink;
@property(nonatomic) BOOL useColumnScrollRegion;
- (void)cursorToX:(int)arg1 Y:(int)arg2;
- (void)cursorToY:(int)arg1;
- (void)incrementOverflowBy:(int)arg1;
- (BOOL)convertRange:(CDStruct_7a47e81c)arg1 toWidth:(int)arg2 to:(CDStruct_7a47e81c *)arg3 inLineBuffer:(id)arg4 tolerateEmpty:(BOOL)arg5;
- (id)positionRangeForCoordRange:(CDStruct_7a47e81c)arg1 inLineBuffer:(id)arg2 tolerateEmpty:(BOOL)arg3;
- (BOOL)trimSelectionFromStart:(CDStruct_1ef3fb1f)arg1 end:(CDStruct_1ef3fb1f)arg2 toStartX:(CDStruct_1ef3fb1f *)arg3 toEndX:(CDStruct_1ef3fb1f *)arg4;
- (CDStruct_aa20e8de)runByTrimmingNullsFromRun:(CDStruct_aa20e8de)arg1;
- (int)appendScreen:(id)arg1 toScrollback:(id)arg2 withUsedHeight:(int)arg3 newHeight:(int)arg4;
- (void)highlightRun:(CDStruct_aa20e8de)arg1 withForegroundColor:(id)arg2 backgroundColor:(id)arg3;
- (void)dumpScreen;
- (void)setCursorX:(int)arg1 Y:(int)arg2;
- (BOOL)isAnyCharDirty;
- (void)setInitialTabStops;
- (CDStruct_7a47e81c)commandRange;
- (void)terminalRepeatPreviousCharacter:(int)arg1;
- (void)terminalCustomEscapeSequenceWithParameters:(id)arg1 payload:(id)arg2;
- (void)terminalSetColorNamed:(id)arg1 to:(id)arg2;
- (void)terminalPopKeyLabels:(id)arg1;
- (void)terminalPushKeyLabels:(id)arg1;
- (void)terminalSetLabel:(id)arg1 forKey:(id)arg2;
- (long long)terminalUnicodeVersion;
- (void)terminalSetUnicodeVersion:(long long)arg1;
- (struct CGSize)terminalCellSizeInPoints;
- (int)terminalChecksumInRectangle:(CDStruct_7a47e81c)arg1;
- (CDStruct_7a47e81c)terminalScrollRegion;
- (id)terminalProfileName;
- (void)terminalInsertModeDidChangeTo:(BOOL)arg1;
- (void)terminalTypeDidChange;
- (void)terminalWraparoundModeDidChangeTo:(BOOL)arg1;
- (void)terminalSetShellIntegrationVersion:(id)arg1;
- (void)terminalFinalTermCommand:(id)arg1;
- (void)terminalReturnCodeOfLastCommandWas:(int)arg1;
- (void)terminalProgressDidFinish;
- (void)terminalProgressAt:(double)arg1 label:(id)arg2;
- (void)terminalSemanticTextDidEndOfType:(long long)arg1;
- (void)terminalSemanticTextDidStartOfType:(long long)arg1;
- (void)commandWasAborted;
- (void)terminalAbortCommand;
- (BOOL)commandDidEndAtAbsCoord:(CDStruct_dc106ac8)arg1;
- (void)terminalCommandDidEnd;
- (void)commandDidStartAt:(CDStruct_dc106ac8)arg1;
- (void)commandDidStartAtScreenCoord:(CDStruct_1ef3fb1f)arg1;
- (void)terminalCommandDidStart;
- (void)promptDidStartAt:(CDStruct_dc106ac8)arg1;
- (void)terminalPromptDidStart;
- (void)terminalSetHighlightCursorLine:(BOOL)arg1;
- (void)terminalSetCursorVisible:(BOOL)arg1;
- (int)terminalCursorY;
- (int)terminalCursorX;
- (id)terminalColorForIndex:(int)arg1;
- (BOOL)terminalFocusReportingEnabled;
- (void)terminalSetTabColorBlueComponentTo:(double)arg1;
- (void)terminalSetTabColorGreenComponentTo:(double)arg1;
- (void)terminalSetTabColorRedComponentTo:(double)arg1;
- (void)terminalSetCurrentTabColor:(id)arg1;
- (void)terminalSetColorTableEntryAtIndex:(int)arg1 color:(id)arg2;
- (void)terminalSetCursorTextColor:(id)arg1;
- (void)terminalSetCursorColor:(id)arg1;
- (void)terminalSetSelectedTextColor:(id)arg1;
- (void)terminalSetSelectionColor:(id)arg1;
- (void)terminalSetBoldColor:(id)arg1;
- (void)terminalSetBackgroundColor:(id)arg1;
- (void)terminalSetForegroundColor:(id)arg1;
- (void)terminalSetUserVar:(id)arg1;
- (void)terminalSetBadgeFormat:(id)arg1;
- (void)terminalSetBackgroundImageFile:(id)arg1;
- (void)terminalRequestAttention:(unsigned long long)arg1;
- (BOOL)terminalIsTrusted;
- (void)terminalAppendDataToPasteboard:(id)arg1;
- (BOOL)terminalIsAppendingToPasteboard;
- (void)terminalCopyBufferToPasteboard;
- (void)terminalPasteboardReceiptEndedUnexpectedly;
- (void)terminalDidFinishReceivingPasteboard;
- (void)terminalDidReceiveBase64PasteboardString:(id)arg1;
- (void)terminalBeginCopyToPasteboard;
- (void)terminalRequestUpload:(id)arg1;
- (void)terminalFileReceiptEndedUnexpectedly;
- (void)terminalDidReceiveBase64FileData:(id)arg1;
- (void)terminalDidFinishReceivingFile;
- (void)terminalWillEndLinkWithCode:(unsigned short)arg1;
- (void)terminalWillStartLinkWithCode:(unsigned short)arg1;
- (void)addURLMarkAtLineAfterCursorWithCode:(unsigned short)arg1;
- (void)appendImageAtCursorWithName:(id)arg1 width:(int)arg2 units:(long long)arg3 height:(int)arg4 units:(long long)arg5 preserveAspectRatio:(BOOL)arg6 inset:(struct NSEdgeInsets)arg7 image:(id)arg8 data:(id)arg9;
- (void)terminalWillReceiveInlineFileNamed:(id)arg1 ofSize:(int)arg2 width:(int)arg3 units:(long long)arg4 height:(int)arg5 units:(long long)arg6 preserveAspectRatio:(BOOL)arg7 inset:(struct NSEdgeInsets)arg8;
- (void)terminalWillReceiveFileNamed:(id)arg1 ofSize:(int)arg2;
- (void)terminalSetPasteboard:(id)arg1;
- (void)terminalAddNote:(id)arg1 show:(BOOL)arg2;
- (void)terminalProfileShouldChangeTo:(id)arg1;
- (void)terminalCurrentDirectoryDidChangeTo:(id)arg1;
- (void)terminalClearBuffer;
- (void)terminalClearScrollbackBuffer;
- (void)terminalStealFocus;
- (void)terminalSaveScrollPositionWithArgument:(id)arg1;
- (void)terminalClearScreen;
- (void)terminalSetWorkingDirectoryURL:(id)arg1;
- (void)setHost:(id)arg1 user:(id)arg2;
- (void)terminalSetRemoteHost:(id)arg1;
- (void)terminalShowPrimaryBuffer;
- (void)hideOnScreenNotesAndTruncateSpanners;
- (BOOL)showingAlternateScreen;
- (BOOL)terminalIsShowingAltBuffer;
- (void)terminalShowAltBuffer;
- (void)swapNotes;
- (void)moveNotesOnScreenFrom:(id)arg1 to:(id)arg2 offset:(long long)arg3 screenOrigin:(int)arg4;
- (BOOL)terminalUseColumnScrollRegion;
- (void)terminalSetUseColumnScrollRegion:(BOOL)arg1;
- (void)terminalNeedsRedraw;
- (void)terminalMouseModeDidChangeTo:(long long)arg1;
- (int)terminalHeight;
- (int)terminalWidth;
- (BOOL)terminalInTmuxMode;
- (void)terminalHandleTmuxInput:(id)arg1;
- (void)terminalStartTmuxModeWithDCSIdentifier:(id)arg1;
- (BOOL)terminalPostGrowlNotification:(id)arg1;
- (void)terminalPopCurrentTitleForWindow:(BOOL)arg1;
- (void)terminalPushCurrentTitleForWindow:(BOOL)arg1;
- (id)terminalWindowTitle;
- (id)terminalIconTitle;
- (int)terminalScreenWidthInCells;
- (int)terminalScreenHeightInCells;
- (int)terminalWindowHeightInPixels;
- (int)terminalWindowWidthInPixels;
- (struct CGPoint)terminalWindowTopLeftPixelCoordinate;
- (BOOL)terminalWindowIsMiniaturized;
- (void)terminalScrollDown:(int)arg1;
- (void)terminalScrollUp:(int)arg1;
- (void)terminalRaise:(BOOL)arg1;
- (void)terminalMiniaturize:(BOOL)arg1;
- (void)terminalMoveWindowTopLeftPointTo:(struct CGPoint)arg1;
- (void)terminalSetPixelWidth:(int)arg1 height:(int)arg2;
- (void)terminalSetRows:(int)arg1 andColumns:(int)arg2;
- (void)terminalDeleteLinesAtCursor:(int)arg1;
- (void)terminalDeleteCharactersAtCursor:(int)arg1;
- (void)terminalInsertBlankLinesAfterCursor:(int)arg1;
- (void)terminalInsertEmptyCharsAtCursor:(int)arg1;
- (void)terminalPasteString:(id)arg1;
- (void)terminalSetIconTitle:(id)arg1;
- (void)terminalSetWindowTitle:(id)arg1;
- (void)terminalPrintScreen;
- (void)terminalBeginRedirectingToPrintBuffer;
- (void)terminalPrintBuffer;
- (void)terminalEraseCharactersAfterCursor:(int)arg1;
- (void)terminalSetCursorY:(int)arg1;
- (void)terminalSetCursorX:(int)arg1;
- (void)terminalBackTab:(int)arg1;
- (void)terminalSetWidth:(int)arg1;
- (void)terminalRemoveTabStopAtCursor;
- (void)terminalRemoveTabStops;
- (BOOL)terminalLineDrawingFlagForCharset:(int)arg1;
- (void)terminalSetCharset:(int)arg1 toLineDrawingMode:(BOOL)arg2;
- (void)terminalSetLeftMargin:(int)arg1 rightMargin:(int)arg2;
- (void)terminalSetCursorBlinking:(BOOL)arg1;
- (void)terminalSetCursorType:(long long)arg1;
- (void)terminalResetPreservingPrompt:(BOOL)arg1;
- (void)terminalReverseIndex;
- (void)terminalCarriageReturn;
- (void)terminalSetTabStopAtCursor;
- (void)terminalEraseLineBeforeCursor:(BOOL)arg1 afterCursor:(BOOL)arg2;
- (void)terminalEraseInDisplayBeforeCursor:(BOOL)arg1 afterCursor:(BOOL)arg2;
- (void)scrollScreenIntoHistory;
- (void)terminalSetScrollRegionTop:(int)arg1 bottom:(int)arg2;
- (int)terminalRelativeCursorY;
- (int)terminalRelativeCursorX;
- (void)terminalShowTestPattern;
- (id)terminalValueOfVariableNamed:(id)arg1;
- (void)terminalSendReport:(id)arg1;
- (BOOL)terminalShouldSendReport;
- (void)terminalMoveCursorToX:(int)arg1 y:(int)arg2;
- (void)terminalCursorUp:(int)arg1 andToStartOfLine:(BOOL)arg2;
- (void)terminalCursorRight:(int)arg1;
- (void)terminalCursorDown:(int)arg1 andToStartOfLine:(BOOL)arg2;
- (void)terminalCursorLeft:(int)arg1;
- (void)terminalLineFeed;
- (BOOL)cursorOutsideLeftRightMargin;
- (void)terminalAppendTabAtCursor;
- (int)tabStopAfterColumn:(int)arg1;
- (void)terminalBackspace;
- (BOOL)shouldReverseWrap;
- (void)doBackspace;
- (void)terminalRingBell;
- (void)terminalAppendAsciiData:(CDStruct_0a2cd81d *)arg1;
- (void)terminalAppendString:(id)arg1;
- (id)stringLineAsStringAtAbsoluteLineNumber:(long long)arg1 startPtr:(long long *)arg2;
- (BOOL)setUseSavedGridIfAvailable:(BOOL)arg1;
- (CDStruct_7a47e81c)textViewRangeOfOutputForCommandMark:(id)arg1;
- (CDStruct_1ef3fb1f)lineNumberRangeOfInterval:(id)arg1;
- (BOOL)containsMark:(id)arg1;
- (id)marksOrNotesAfter:(id)arg1;
- (id)marksOrNotesBefore:(id)arg1;
- (int)lineNumberOfMarkAfterLine:(int)arg1;
- (int)lineNumberOfMarkBeforeLine:(int)arg1;
- (id)firstMarksOrNotes;
- (id)lastMarksOrNotes;
- (id)markOnLine:(int)arg1;
- (id)lastMarkMustBePrompt:(BOOL)arg1 class:(Class)arg2;
- (id)lastRemoteHost;
- (id)lastMark;
- (id)lastPromptMark;
- (id)notesInRange:(CDStruct_7a47e81c)arg1;
- (id)charactersWithNotesOnLine:(int)arg1;
- (CDStruct_7a47e81c)coordRangeOfNote:(id)arg1;
- (id)addMarkStartingAtAbsoluteLine:(long long)arg1 oneLine:(BOOL)arg2 ofClass:(Class)arg3;
- (BOOL)markIsValid:(id)arg1;
- (void)removeInaccessibleNotes;
- (void)addNote:(id)arg1 inRange:(CDStruct_7a47e81c)arg2;
- (id)workingDirectoryOnLine:(int)arg1;
- (id)scpPathForFile:(id)arg1 onLine:(int)arg2;
- (id)remoteHostOnLine:(int)arg1;
- (id)objectOnOrBeforeLine:(int)arg1 ofClass:(Class)arg2;
- (id)setRemoteHost:(id)arg1 user:(id)arg2 onLine:(int)arg3;
- (void)setWorkingDirectory:(id)arg1 onLine:(int)arg2;
- (CDStruct_1ef3fb1f)predecessorOfCoord:(CDStruct_1ef3fb1f)arg1;
- (CDStruct_7a47e81c)coordRangeForInterval:(id)arg1;
- (id)intervalForGridCoordRange:(CDStruct_7a47e81c)arg1;
- (id)intervalForGridCoordRange:(CDStruct_7a47e81c)arg1 width:(int)arg2 linesOffset:(long long)arg3;
- (id)timestampForLine:(int)arg1;
- (CDStruct_1ef3fb1f)dirtyRangeForLine:(int)arg1;
- (BOOL)shouldSendContentsChangedNotification;
- (void)saveToDvr;
- (void)resetDirty;
- (id)dirtyIndexesOnLine:(int)arg1;
- (BOOL)isDirtyAtX:(int)arg1 Y:(int)arg2;
- (void)setCharDirtyAtCursorX:(int)arg1 Y:(int)arg2;
- (void)resetAnimatedLines;
- (void)setRangeOfCharsAnimated:(struct _NSRange)arg1 onLine:(int)arg2;
- (void)setLineDirtyAtY:(int)arg1;
- (void)resetAllDirty;
- (BOOL)isAllDirty;
- (id)currentGrid;
- (id)compactLineDump;
- (id)compactLineDumpWithHistoryAndContinuationMarksAndLineNumbers;
- (id)compactLineDumpWithHistoryAndContinuationMarks;
- (id)compactLineDumpWithHistory;
- (id)debugString;
- (void)saveFindContextAbsPos;
- (void)setFindString:(id)arg1 forwardDirection:(BOOL)arg2 mode:(unsigned long long)arg3 startingAtX:(int)arg4 startingAtY:(int)arg5 withOffset:(int)arg6 inContext:(id)arg7 multipleResults:(BOOL)arg8;
- (id)findContext;
- (BOOL)continueFindAllResults:(id)arg1 inContext:(id)arg2;
- (int)lineNumberOfCursor;
- (long long)absoluteLineNumberOfCursor;
- (long long)totalScrollbackOverflow;
- (void)resetScrollbackOverflow;
- (int)scrollbackOverflow;
- (int)numberOfScrollbackLines;
- (struct screen_char_t *)getLineAtScreenIndex:(int)arg1;
- (struct screen_char_t *)getLineAtIndex:(int)arg1 withBuffer:(struct screen_char_t *)arg2;
- (struct screen_char_t *)getLineAtIndex:(int)arg1;
- (void)resetTimestamps;
- (void)setCursorPosition:(CDStruct_1ef3fb1f)arg1;
- (int)cursorY;
- (int)cursorX;
- (int)height;
- (int)width;
- (int)numberOfLines;
- (id)session;
- (void)restoreSavedPositionToFindContext:(id)arg1;
- (void)storeLastPositionInLineBufferAsFindContextSavedPosition;
- (void)setFromFrame:(struct screen_char_t *)arg1 len:(int)arg2 info:(CDStruct_fdbd985a)arg3;
- (void)highlightTextInRange:(struct _NSRange)arg1 basedAtAbsoluteLineNumber:(long long)arg2 colors:(id)arg3;
- (void)setTmuxState:(id)arg1;
- (void)setAltScreen:(id)arg1;
- (void)setHistory:(id)arg1;
- (void)activateBell;
- (void)cursorToX:(int)arg1;
- (void)linefeed;
- (void)crlf;
- (void)appendScreenCharArrayAtCursor:(struct screen_char_t *)arg1 length:(int)arg2 shouldFree:(BOOL)arg3;
- (void)appendStringAtCursor:(id)arg1;
- (void)appendAsciiDataAtCursor:(CDStruct_0a2cd81d *)arg1;
- (void)appendScreenChars:(struct screen_char_t *)arg1 length:(int)arg2 continuation:(struct screen_char_t)arg3;
- (void)clearScrollbackBuffer;
- (void)clearAndResetScreenPreservingCursorLine;
- (void)clearBuffer;
- (void)showCursor:(BOOL)arg1;
- (BOOL)allCharacterSetPropertiesHaveDefaultValues;
- (void)reloadMarkCache;
@property(nonatomic) CDStruct_1ef3fb1f size;
- (BOOL)computeRangeFromOriginalLimit:(id)arg1 limitPosition:(id)arg2 startPosition:(id)arg3 endPosition:(id)arg4 newWidth:(int)arg5 lineBuffer:(id)arg6 range:(CDStruct_7a47e81c *)arg7 linesMovedUp:(int)arg8;
- (BOOL)intervalTreeObjectMayBeEmpty:(id)arg1;
- (void)destructivelySetScreenWidth:(int)arg1 height:(int)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithTerminal:(id)arg1;
- (void)setMayHaveDoubleWidthCharacters:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

