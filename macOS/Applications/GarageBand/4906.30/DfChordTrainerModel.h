//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DfDocument, DfTrack, GChSimpleDatabase, GChTuning, NSArray, NSDictionary, NSMutableArray;

@interface DfChordTrainerModel : NSObject
{
    DfDocument *_document;
    GChSimpleDatabase *_chordDatabase;
    NSMutableArray *_chordLibraryPaths;
    NSMutableArray *_chordLibraryNames;
    NSArray *_chords;
    unsigned long long _currentChordIndex;
    id _noteFinderDataSource;
    id _delegate;
    NSDictionary *_cachedInputSources;
    NSMutableArray *_expectedNotesForStrings;
}

+ (void)setStaticMonitorState:(int)arg1;
+ (int)staticMonitorState;
@property(readonly) NSArray *expectedNotesForStrings; // @synthesize expectedNotesForStrings=_expectedNotesForStrings;
@property(readonly) NSArray *chords; // @synthesize chords=_chords;
@property(readonly) DfDocument *document; // @synthesize document=_document;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)selectInputSource:(id)arg1;
- (id)activeInputSource;
- (id)inputSources;
- (void)_updateCachedInputSources;
- (void)handleDriverChanged:(id)arg1;
- (void)handleDriverWillChange:(id)arg1;
- (void)inputLevelForDisplayOnLevelMeterLeft:(float *)arg1 right:(float *)arg2;
- (id)noteFinderPlugIn;
@property(readonly) DfTrack *audioTrack;
- (id)chordLibraryNameForIndex:(unsigned long long)arg1;
- (id)chordLibraryNames;
- (id)chordAtIndex:(unsigned long long)arg1;
@property unsigned long long currentChordIndex;
@property(readonly) unsigned long long countOfChords;
@property unsigned long long currentLibraryIndex;
@property(readonly) unsigned long long countOfLibrarys;
- (id)factoryTemplatesFolderChordTrainerLessons;
- (void)_updateChordLibraryNames;
@property(readonly) GChTuning *currentTuning;
- (void)dealloc;
- (id)init;
- (void)_selectInputIndexFromPreferences;
- (void)_newFretboardDataAvailableCallback:(const struct MADSPEvents *)arg1;
- (void)_redGlowCallback;
- (void)_whiteGlowCallback;
- (void)_noSignalCallback;
- (void)_chordDetectedCallback;
- (void)_resetNoteFinderPlugIn;
- (BOOL)_activateNoteFinderPlugIn;
- (BOOL)_setupNoteFinderPlugIn;
- (void)_setNoteFinderPlugInChord:(id)arg1;
- (BOOL)_readChordLibraryAtPath:(id)arg1;
- (BOOL)_createAudioTrack;
- (BOOL)_loadDefaultChannelStrip;
- (BOOL)_loadFallbackChannelStrip;
- (id)defaultChordTrainerInstrumentFullPath;
- (id)defaultGuitarInstrumentFullPath;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)defaultValueForUndefinedKey:(id)arg1;

@end

