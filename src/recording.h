#pragma once
/*
 *      Copyright (C) 2011 Marcel Groothuis, FHo
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#include "kodi/libXBMC_pvr.h"
#include <string>
#include <json/json.h>
#include "argustvrpc.h"

class cRecording
{
private:
  int id;
  std::string actors;
  std::string category;
  std::string channeldisplayname;
  std::string channelid;
  ArgusTV::ChannelType channeltype;
  std::string description;
  std::string director;
  int episodenumber;
  std::string episodenumberdisplay;
  int episodenumbertotal;
  int episodepart;
  int episodeparttotal;
  bool isfullywatched;
  bool ispartofseries;
  bool ispartialrecording;
  bool ispremiere;
  bool isrepeat;
  ArgusTV::KeepUntilMode keepuntilmode;
  int keepuntilvalue;
  int lastwatchedposition;
  int fullywatchedcount;
  time_t lastwatchedtime;
  time_t programstarttime;
  time_t programstoptime;
  std::string rating;
  std::string recordingfileformatid;
  std::string recordingfilename;
  std::string recordingid;
  time_t recordingstarttime;
  time_t recordingstoptime;
  std::string scheduleid;
  std::string schedulename;
  ArgusTV::SchedulePriority schedulepriority;
  int seriesnumber;
  double starrating;
  std::string subtitle;
  std::string title;
public:
  cRecording(void);
  virtual ~cRecording(void);

  bool Parse(const Json::Value& data);

  void Transform(bool isgroupmember);
  int Id(void) const { return id; }
  const char *Actors(void) const { return actors.c_str(); }
  const char *Category(void) const { return category.c_str(); }
  const char *ChannelDisplayName(void) const { return channeldisplayname.c_str(); }
  const char *ChannelId(void) const { return channelid.c_str(); }
  ArgusTV::ChannelType ChannelType(void) const { return channeltype; };
  const char *Description(void) const { return description.c_str(); }
  const char *Director(void) const { return director.c_str(); }
  int EpisodeNumber(void) const { return episodenumber; }
  const char *EpisodeNumberDisplay(void) const { return episodenumberdisplay.c_str(); }
  int EpisodeNumberTotal(void) const { return episodenumbertotal; }
  int EpisodePart(void) const { return episodepart; }
  int EpisodePartTotal(void) const { return episodeparttotal; }
  bool IsFullyWatched(void) const { return isfullywatched; }
  bool IsPartOfSeries(void) const { return ispartofseries; }
  bool IsPartialRecording(void) const { return ispartialrecording; }
  bool IsPremiere(void) const { return ispremiere; }
  bool IsRepeat(void) const { return isrepeat; }
  ArgusTV::KeepUntilMode KeepUntilMode(void) const { return keepuntilmode; }
  int KeepUntilValue(void) const { return keepuntilvalue; }
  int LastWatchedPosition(void) const { return lastwatchedposition; }
  int FullyWatchedCount(void) const { return fullywatchedcount; }
  time_t LastWatchedTime(void) const { return lastwatchedtime; }
  time_t ProgramStartTime(void) const { return programstarttime; }
  time_t ProgramStopTime(void) const { return programstoptime; }
  const char *Rating(void) const { return rating.c_str(); }
  const char *RecordingFileFormatId(void) const { return recordingfileformatid.c_str(); }
  const char *RecordingFileName(void) const { return recordingfilename.c_str(); }
  const char *RecordingId(void) const { return recordingid.c_str(); }
  time_t RecordingStartTime(void) const { return recordingstarttime; }
  time_t RecordingStopTime(void) const { return recordingstoptime; }
  const char *ScheduleId(void) const { return scheduleid.c_str(); }
  const char *ScheduleName(void) const { return schedulename.c_str(); }
  ArgusTV::SchedulePriority SchedulePriority(void) const { return schedulepriority; }
  int SeriesNumber(void) const { return seriesnumber; }
  double StarRating(void) const { return starrating; }
  const char *SubTitle(void) const { return subtitle.c_str(); }
  const char *Title(void) const { return title.c_str(); }
};
