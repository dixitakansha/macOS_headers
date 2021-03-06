//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MBCMoveCounter.h"

@interface MBCCheckCounter : MBCMoveCounter
{
    _Bool fWhite;
    _Bool fCanCastle;
    struct MBCMoveGenerator *fGenerator;
    struct MBCPieces fPosition;
}

- (void)validCastle:(unsigned char)arg1 kingSide:(BOOL)arg2;
- (void)validDrop:(unsigned char)arg1 at:(unsigned char)arg2;
- (void)validMove:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 capturing:(unsigned char)arg4;
- (void)validMove:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
- (void)dealloc;
- (id)initForWhite:(BOOL)arg1 variant:(int)arg2 position:(const struct MBCPieces *)arg3 canCastle:(BOOL)arg4;

@end

