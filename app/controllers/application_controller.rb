class ApplicationController < ActionController::Base
  protect_from_forgery with: :exception

  def home
  end

  def projects
  end

  def team
  end

  def philosophy
  end

  def partners
  end

  def contact
  end

  def plarrs
    @disable_nav = true
  end

end
